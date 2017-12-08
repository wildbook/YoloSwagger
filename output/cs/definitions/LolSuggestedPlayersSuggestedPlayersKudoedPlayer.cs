using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi
{
    [DataContract]
    struct LolSuggestedPlayersSuggestedPlayersKudoedPlayer
    {
        [DataMember(Name = "kudoedSummonerId")]
        ulong KudoedSummonerId { get; set; }

        [DataMember(Name = "kudoedSummonerName")]
        string KudoedSummonerName { get; set; }

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