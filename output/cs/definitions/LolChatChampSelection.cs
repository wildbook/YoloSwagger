using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi
{
    [DataContract]
    struct LolChatChampSelection
    {
        [DataMember(Name = "selectedSkinIndex")]
        int SelectedSkinIndex { get; set; }

        [DataMember(Name = "summonerInternalName")]
        string SummonerInternalName { get; set; }

        [DataMember(Name = "championId")]
        int ChampionId { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class LolChatChampSelection {\n");
            sb.Append("  SelectedSkinIndex: ").Append(SelectedSkinIndex).Append("\n");
            sb.Append("  SummonerInternalName: ").Append(SummonerInternalName).Append("\n");
            sb.Append("  ChampionId: ").Append(ChampionId).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}