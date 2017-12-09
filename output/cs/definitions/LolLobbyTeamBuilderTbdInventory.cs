using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace LeagueClientApi.Definitions
{
    [DataContract]
    public struct LolLobbyTeamBuilderTbdInventory
    {
        [DataMember(Name = "allChampionIds")]
        public int[] AllChampionIds { get; set; }

        [DataMember(Name = "disabledChampionIds")]
        public int[] DisabledChampionIds { get; set; }

        [DataMember(Name = "initialSpellIds")]
        public int[] InitialSpellIds { get; set; }

        [DataMember(Name = "lastSelectedSkinIdByChampionId")]
        public Dictionary<string, int> LastSelectedSkinIdByChampionId { get; set; }

        [DataMember(Name = "skinIds")]
        public int[] SkinIds { get; set; }

        [DataMember(Name = "spellIds")]
        public int[] SpellIds { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class LolLobbyTeamBuilderTbdInventory {\n");
            sb.Append("  AllChampionIds: ").Append(AllChampionIds).Append("\n");
            sb.Append("  DisabledChampionIds: ").Append(DisabledChampionIds).Append("\n");
            sb.Append("  InitialSpellIds: ").Append(InitialSpellIds).Append("\n");
            sb.Append("  LastSelectedSkinIdByChampionId: ").Append(LastSelectedSkinIdByChampionId).Append("\n");
            sb.Append("  SkinIds: ").Append(SkinIds).Append("\n");
            sb.Append("  SpellIds: ").Append(SpellIds).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}