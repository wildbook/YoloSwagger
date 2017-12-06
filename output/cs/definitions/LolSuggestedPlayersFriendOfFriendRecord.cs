using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi
{
    [DataContract]
    struct LolSuggestedPlayersFriendOfFriendRecord
    {
        [DataMember(Name = "commonFriendId")]
        ulong CommonFriendId { get; set; }

        [DataMember(Name = "commonFriendName")]
        string CommonFriendName { get; set; }

        [DataMember(Name = "summonerId")]
        ulong SummonerId { get; set; }

        [DataMember(Name = "summonerName")]
        string SummonerName { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class LolSuggestedPlayersFriendOfFriendRecord {\n");
            sb.Append("  CommonFriendId: ").Append(CommonFriendId).Append("\n");
            sb.Append("  CommonFriendName: ").Append(CommonFriendName).Append("\n");
            sb.Append("  SummonerId: ").Append(SummonerId).Append("\n");
            sb.Append("  SummonerName: ").Append(SummonerName).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}