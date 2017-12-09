using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace LeagueClientApi.Definitions
{
    [DataContract]
    public struct ChampSelectLcdsPlayerChampionSelectionDTO
    {
        [DataMember(Name = "championId")]
        public int ChampionId { get; set; }

        [DataMember(Name = "selectedSkinIndex")]
        public int SelectedSkinIndex { get; set; }

        [DataMember(Name = "spell1Id")]
        public int Spell1Id { get; set; }

        [DataMember(Name = "spell2Id")]
        public int Spell2Id { get; set; }

        [DataMember(Name = "summonerInternalName")]
        public string SummonerInternalName { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class ChampSelectLcdsPlayerChampionSelectionDTO {\n");
            sb.Append("  ChampionId: ").Append(ChampionId).Append("\n");
            sb.Append("  SelectedSkinIndex: ").Append(SelectedSkinIndex).Append("\n");
            sb.Append("  Spell1Id: ").Append(Spell1Id).Append("\n");
            sb.Append("  Spell2Id: ").Append(Spell2Id).Append("\n");
            sb.Append("  SummonerInternalName: ").Append(SummonerInternalName).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}