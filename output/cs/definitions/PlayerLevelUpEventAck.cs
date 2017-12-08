using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi
{
    [DataContract]
    struct PlayerLevelUpEventAck
    {
        [DataMember(Name = "seenThisEvent")]
        bool SeenThisEvent { get; set; }

        [DataMember(Name = "newSummonerLevel")]
        uint NewSummonerLevel { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class PlayerLevelUpEventAck {\n");
            sb.Append("  SeenThisEvent: ").Append(SeenThisEvent).Append("\n");
            sb.Append("  NewSummonerLevel: ").Append(NewSummonerLevel).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}