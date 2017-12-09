using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace LeagueClientApi.Definitions
{
    [DataContract]
    public struct PlayerLevelUpEventAck
    {
        [DataMember(Name = "newSummonerLevel")]
        public uint NewSummonerLevel { get; set; }

        [DataMember(Name = "seenThisEvent")]
        public bool SeenThisEvent { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class PlayerLevelUpEventAck {\n");
            sb.Append("  NewSummonerLevel: ").Append(NewSummonerLevel).Append("\n");
            sb.Append("  SeenThisEvent: ").Append(SeenThisEvent).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}