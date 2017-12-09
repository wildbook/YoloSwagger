using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace LeagueClientApi.Definitions
{
    [DataContract]
    public struct LolLobbyTeamBuilderTeamBoost
    {
        [DataMember(Name = "availableSkins")]
        public long[] AvailableSkins { get; set; }

        [DataMember(Name = "ipReward")]
        public long IpReward { get; set; }

        [DataMember(Name = "ipRewardForPurchaser")]
        public long IpRewardForPurchaser { get; set; }

        [DataMember(Name = "price")]
        public long Price { get; set; }

        [DataMember(Name = "skinUnlockMode")]
        public string SkinUnlockMode { get; set; }

        [DataMember(Name = "summonerName")]
        public string SummonerName { get; set; }

        [DataMember(Name = "unlocked")]
        public bool Unlocked { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class LolLobbyTeamBuilderTeamBoost {\n");
            sb.Append("  AvailableSkins: ").Append(AvailableSkins).Append("\n");
            sb.Append("  IpReward: ").Append(IpReward).Append("\n");
            sb.Append("  IpRewardForPurchaser: ").Append(IpRewardForPurchaser).Append("\n");
            sb.Append("  Price: ").Append(Price).Append("\n");
            sb.Append("  SkinUnlockMode: ").Append(SkinUnlockMode).Append("\n");
            sb.Append("  SummonerName: ").Append(SummonerName).Append("\n");
            sb.Append("  Unlocked: ").Append(Unlocked).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}