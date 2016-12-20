## Developer instructions

Preparing your development environment is largely automated if you have access to the
Acquia environments.

```bash
composer sync
```

This is shorthand or these commands:

```bash
drush --yes --root=docroot sql-sync @fldmuse.prod @self
drush --yes --root=docroot rsync @fldmuse.prod:%files @self:%files -Pv
drush --yes --root=docroot dis domain_301_redirect securelogin
```

Those commands synchronize database and files with production. The last command disables
modules which redirect you to <www.fieldmuseum.org>.

## Asset building

Commands to build the front end assets from Table XI and any additional/overrides in the
theme are implemented as [Composer scripts](https://getcomposer.org/doc/articles/scripts.md)
at the root level of the repository.

For now, these scripts serve primarily as documentation, and they may require modification
to work on your development environment. Composer scripts are simple ways to execute a
series of commands. You can inspect and modify the commands in `composer.json` in the root
directory of the repository under "scripts."

### One time instructions

1. Install composer. <https://getcomposer.org/download/> This is the PHP dependency
   manager.
1. Install robo. <http://robo.li> This is a PHP task runner.
2. Install rvm. <http://rvm.io> This lets you maintain multiple installations of Ruby
   in your environment (and prevents these instructions from creating conflicts with
   any other ruby uses you already have).
3. Install node.js and npm. <https://nodejs.org/download/> On Mac, I recommend homebrew.
   <http://blog.teamtreehouse.com/install-node-js-npm-mac>
4. Run `rvm use ruby-2.2.2@fldmuse --create`, `gem install bundle && bundle install`
   and `npm install -g coffee-script postcss-cli autoprefixer`. If these run without
   error, you are able to build the assets.

### Build instructions

1. From the root directory of the repository, run `composer theme:build`.
