const path = require('path');

module.exports = {
  entry: {
    home: path.join(__dirname, 'lib/js/src/home/index.js')
  },
  output: {
    path: path.join(__dirname, "dist"),
    filename: '[name].js',
  },
};
