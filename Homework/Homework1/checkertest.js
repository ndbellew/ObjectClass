var assert = require('assert');
var checker = require('checker');
  describe('checkerPiece', function() {
    describe('#constructor()', function(){
      it('should be red when started red, and start somewhere', function(){
        let redpiece1 = checker.checkerPiece("red", True, 0,0);
        assert.equal("red", redpiece1.color);
        assert.equal(True, redpiece1.alive);
        assert.equal(0, redpiece1.positionx);
      });
      it('should fail when trying to use while dead', function() {
        let redpiece2 = checker.checkerPiece("red", False, 0,3);
        expect(redpiece2.move(1,5).to.throw(checkerPiece.DEAD_CANNOT_WALK));
      });
    });
  });
