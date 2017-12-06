using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi
{
    [DataContract]
    struct LolGameQueuesLoginDataPacket
    {
        [DataMember(Name = "gameTypeConfigs")]
        LolGameQueuesQueueGameTypeConfig[] GameTypeConfigs { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class LolGameQueuesLoginDataPacket {\n");
            sb.Append("  GameTypeConfigs: ").Append(GameTypeConfigs).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}