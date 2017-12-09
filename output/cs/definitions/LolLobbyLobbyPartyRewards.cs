using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace LeagueClientApi.Definitions
{
    [DataContract]
    public struct LolLobbyLobbyPartyRewards
    {
        [DataMember(Name = "isCustom")]
        public bool IsCustom { get; set; }

        [DataMember(Name = "isEnabled")]
        public bool IsEnabled { get; set; }

        [DataMember(Name = "partyRewards")]
        public LolLobbyPartyReward[] PartyRewards { get; set; }

        [DataMember(Name = "queueId")]
        public int QueueId { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class LolLobbyLobbyPartyRewards {\n");
            sb.Append("  IsCustom: ").Append(IsCustom).Append("\n");
            sb.Append("  IsEnabled: ").Append(IsEnabled).Append("\n");
            sb.Append("  PartyRewards: ").Append(PartyRewards).Append("\n");
            sb.Append("  QueueId: ").Append(QueueId).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}