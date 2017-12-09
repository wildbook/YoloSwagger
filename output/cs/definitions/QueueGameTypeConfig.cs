using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace LeagueClientApi.Definitions
{
    [DataContract]
    public struct QueueGameTypeConfig
    {
        [DataMember(Name = "battleBoost")]
        public bool BattleBoost { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class QueueGameTypeConfig {\n");
            sb.Append("  BattleBoost: ").Append(BattleBoost).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}