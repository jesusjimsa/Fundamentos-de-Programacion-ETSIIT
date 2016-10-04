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
public class Monster {

	private String name;
	private int combatLevel;
	private Prize prizes;
	private BadConsequence consequences;

	Monster(String name, int level, BadConsequence bc, Prize prize) {
		this.name = name;
		combatLevel = level;
		prizes = prize;
	}

	String getName() {
		return name;
	}

	void setName(String name) {
		this.name = name;
	}

	int getCombatLevel() {
		return combatLevel;
	}

	void setCombatLevel(int level) {
		combatLevel = level;
	}

	Prize getPrize() {
		return prizes;
	}

	void setPrize(Prize prize) {
		prizes = prize;
	}

	BadConsequence getConsecuence() {
		return consequences;
	}

	void setConsecuence(BadConsequence bc) {
		consequences = bc;
	}

	@Override
	public String toString() {
		return "Name: " + name + "\nCombat Level = " + Integer.toString(combatLevel) + "\nPrize: " + prizes.toString() + "\nBad consequence: " + consequences.toString();
	}
}
