using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace LeagueClientApi.Definitions
{
    [DataContract]
    public struct LolSuggestedPlayersSuggestedPlayersSuggestedPlayer
    {
        [DataMember(Name = "commonFriendId")]
        public ulong CommonFriendId { get; set; }

        [DataMember(Name = "commonFriendName")]
        public string CommonFriendName { get; set; }

        [DataMember(Name = "reason")]
        public LolSuggestedPlayersSuggestedPlayersReason Reason { get; set; }

        [DataMember(Name = "summonerId")]
        public ulong SummonerId { get; set; }

        [DataMember(Name = "summonerName")]
        public string SummonerName { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class LolSuggestedPlayersSuggestedPlayersSuggestedPlayer {\n");
            sb.Append("  CommonFriendId: ").Append(CommonFriendId).Append("\n");
            sb.Append("  CommonFriendName: ").Append(CommonFriendName).Append("\n");
            sb.Append("  Reason: ").Append(Reason).Append("\n");
            sb.Append("  SummonerId: ").Append(SummonerId).Append("\n");
            sb.Append("  SummonerName: ").Append(SummonerName).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}