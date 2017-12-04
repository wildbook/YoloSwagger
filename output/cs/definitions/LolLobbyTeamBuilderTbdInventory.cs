using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi {
  struct LolLobbyTeamBuilderTbdInventory {
    [DataMember(Name = "lastSelectedSkinIdByChampionId")]
    Dictionary<string, int> LastSelectedSkinIdByChampionId {get; set;}

    [DataMember(Name = "skinIds")]
    int[] SkinIds {get; set;}

    [DataMember(Name = "disabledChampionIds")]
    int[] DisabledChampionIds {get; set;}

    [DataMember(Name = "allChampionIds")]
    int[] AllChampionIds {get; set;}

    [DataMember(Name = "spellIds")]
    int[] SpellIds {get; set;}

    [DataMember(Name = "initialSpellIds")]
    int[] InitialSpellIds {get; set;}

    public override string ToString()
    {
      var sb = new StringBuilder();
      sb.Append("class LolLobbyTeamBuilderTbdInventory {\n");
      sb.Append("  LastSelectedSkinIdByChampionId: ").Append(LastSelectedSkinIdByChampionId).Append("\n");
      sb.Append("  SkinIds: ").Append(SkinIds).Append("\n");
      sb.Append("  DisabledChampionIds: ").Append(DisabledChampionIds).Append("\n");
      sb.Append("  AllChampionIds: ").Append(AllChampionIds).Append("\n");
      sb.Append("  SpellIds: ").Append(SpellIds).Append("\n");
      sb.Append("  InitialSpellIds: ").Append(InitialSpellIds).Append("\n");
      sb.Append("}\n");
      return sb.ToString();
    }
  }
}