<?php

require_once '../classes/phing/tasks/ext/SymfonyConsole/Arg.php';

/**
 * Test class for Arg.
 * Generated by PHPUnit on 2012-02-13 at 12:02:17.
 */
class ArgTest extends PHPUnit_Framework_TestCase
{
    /**
     * @var Arg
     */
    protected $object;

    /**
     * Sets up the fixture, for example, opens a network connection.
     * This method is called before a test is executed.
     */
    protected function setUp()
    {
        $this->object = new Arg();
    }

    /**
     * Tears down the fixture, for example, closes a network connection.
     * This method is called after a test is executed.
     */
    protected function tearDown()
    {
    }

    /**
     * @covers Arg::getName
     * @covers Arg::setName
     */
    public function testSetGetName()
    {
        $o = $this->object;
        $o->setName('foo');
        $this->assertEquals('foo', $o->getName());
    }

    /**
     * @covers Arg::getValue
     * @covers Arg::setValue
     */
    public function testSetGetValue()
    {
        $o = $this->object;
        $o->setValue('foo');
        $this->assertEquals('foo', $o->getValue());
    }

    /**
     * @covers Arg::getQuotes
     * @covers Arg::setQuotes
     */
    public function testGetQuotes()
    {
        $o = $this->object;
        $o->setQuotes(true);
        $this->assertEquals(true, $o->getQuotes());
    }

    /**
     * @covers Arg::__toString
     */
    public function test__toString_withQuotes()
    {
        $o = $this->object;
        $o->setName('name');
        $o->setValue('value');
        $o->setQuotes(true);

        $this->assertEquals('--name="value"', '' . $o);
    }

    /**
     * @covers Arg::__toString
     */
    public function test__toString_withoutQuotes()
    {
        $o = $this->object;
        $o->setName('name');
        $o->setValue('value');
        $o->setQuotes(false);

        $this->assertEquals('--name=value', '' . $o);
    }

    /**
     * @covers Arg::__toString
     */
    public function test__toString_justName()
    {
        $o = $this->object;
        $o->setName('name');
        $o->setQuotes(false);

        $this->assertEquals('--name', '' . $o);
    }

    /**
     * @covers Arg::__toString
     */
    public function test__toString_justValueWithoutQuotes()
    {
        $o = $this->object;
        $o->setValue('value');
        $o->setQuotes(false);

        $this->assertEquals('value', '' . $o);
    }

    /**
     * @covers Arg::__toString
     */
    public function test__toString_justValueWithQuotes()
    {
        $o = $this->object;
        $o->setValue('value');
        $o->setQuotes(true);

        $this->assertEquals('"value"', '' . $o);
    }
}
