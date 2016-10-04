/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package napakalaki;

import java.util.ArrayList;

/**
 *
 * @author jesusjimsa
 */
public class BadConsequence {

	private String text;
	private int levels;
	private int nVisibleTreasures;
	private int nHiddenTreasures;
	private boolean death;

	BadConsequence(String text, int levels, int nVisible, int nHidden) {
		this.text = text;
		this.levels = levels;
		nVisibleTreasures = nVisible;
		nHiddenTreasures = nHidden;
	}

	BadConsequence(String text, boolean death) {
		this.text = text;
		this.death = death;
	}

	private ArrayList<TreasureKind> specificHiddenTreasures = new ArrayList();
	private ArrayList<TreasureKind> specificVisibleTreasures = new ArrayList();

	BadConsequence(String text, int levels, ArrayList<TreasureKind> tVisible, ArrayList<TreasureKind> tHidden) {
		this.text = text;
		this.levels = levels;
		specificHiddenTreasures = tHidden;
		specificVisibleTreasures = tVisible;
	}

	String getText() {
		return text;
	}

	void setText(String text) {
		this.text = text;
	}

	int getLevels() {
		return levels;
	}

	void setLevels(int levels) {
		this.levels = levels;
	}

	int getVisibleTreasures() {
		return nVisibleTreasures;
	}

	void setVisibleTreasures(int visible) {
		nVisibleTreasures = visible;
	}

	int getHiddenTreasures() {
		return nHiddenTreasures;
	}

	void setHiddenTreasures(int hidden) {
		nHiddenTreasures = hidden;
	}

	boolean getDeath() {
		return death;
	}

	void setDeath(boolean death) {
		this.death = death;
	}

	ArrayList<TreasureKind> getSpecificHiddenTreasures() {
		return specificHiddenTreasures;
	}

	ArrayList<TreasureKind> getSpecificVisibleTreasures() {
		return specificVisibleTreasures;
	}
	
	@Override
	public String toString(){
		String salida;
		
		salida = "Mal rollo: " + text + "\nLevel = " + Integer.toString(levels);
		salida = salida + "\nVisible Treasures = " + Integer.toString(nVisibleTreasures) + "\nHidden Treasures = " + Integer.toString(nHiddenTreasures);
		salida = salida + "\nSpecific Visible Treasures: " ;
		
		return salida;
	}
}
