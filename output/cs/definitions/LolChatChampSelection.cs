using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace LeagueClientApi.Definitions
{
    [DataContract]
    public struct LolChatChampSelection
    {
        [DataMember(Name = "championId")]
        public int ChampionId { get; set; }

        [DataMember(Name = "selectedSkinIndex")]
        public int SelectedSkinIndex { get; set; }

        [DataMember(Name = "summonerInternalName")]
        public string SummonerInternalName { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class LolChatChampSelection {\n");
            sb.Append("  ChampionId: ").Append(ChampionId).Append("\n");
            sb.Append("  SelectedSkinIndex: ").Append(SelectedSkinIndex).Append("\n");
            sb.Append("  SummonerInternalName: ").Append(SummonerInternalName).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}