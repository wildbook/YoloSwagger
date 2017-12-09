using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace LeagueClientApi.Definitions
{
    [DataContract]
    public struct LolMatchHistoryMatchHistoryPosition
    {
        [DataMember(Name = "x")]
        public short X { get; set; }

        [DataMember(Name = "y")]
        public short Y { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class LolMatchHistoryMatchHistoryPosition {\n");
            sb.Append("  X: ").Append(X).Append("\n");
            sb.Append("  Y: ").Append(Y).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}