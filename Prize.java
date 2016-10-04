/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package napakalaki;

/**
 *
 * @author jesusjimsa
 */
public class Prize {

	private int levels;
	private int treasures;

	Prize(int treasures, int levels) {
		this.levels = levels;
		this.treasures = treasures;
	}

	int getLevels() {
		return levels;
	}

	void setLevels(int l) {
		levels = l;
	}

	int getTreasures() {
		return treasures;
	}

	void setTreasure(int t) {
		treasures = t;
	}

	@Override
	public String toString() {
		return "Treasures = " + Integer.toString(treasures) + "\nLevels = " + Integer.toString(levels);
	}
}
