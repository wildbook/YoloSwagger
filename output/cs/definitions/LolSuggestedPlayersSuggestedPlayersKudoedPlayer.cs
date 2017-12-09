using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace LeagueClientApi.Definitions
{
    [DataContract]
    public struct LolSuggestedPlayersSuggestedPlayersKudoedPlayer
    {
        [DataMember(Name = "kudoedSummonerId")]
        public ulong KudoedSummonerId { get; set; }

        [DataMember(Name = "kudoedSummonerName")]
        public string KudoedSummonerName { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class LolSuggestedPlayersSuggestedPlayersKudoedPlayer {\n");
            sb.Append("  KudoedSummonerId: ").Append(KudoedSummonerId).Append("\n");
            sb.Append("  KudoedSummonerName: ").Append(KudoedSummonerName).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}