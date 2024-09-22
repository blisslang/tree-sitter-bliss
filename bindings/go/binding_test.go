package tree_sitter_bliss_test

import (
	"testing"

	tree_sitter "github.com/tree-sitter/go-tree-sitter"
	tree_sitter_bliss "github.com/tree-sitter/tree-sitter-bliss/bindings/go"
)

func TestCanLoadGrammar(t *testing.T) {
	language := tree_sitter.NewLanguage(tree_sitter_bliss.Language())
	if language == nil {
		t.Errorf("Error loading Bliss grammar")
	}
}
