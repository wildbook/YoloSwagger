using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi
{
    [DataContract]
    struct LolMatchHistoryMatchHistoryPosition
    {
        [DataMember(Name = "y")]
        short Y { get; set; }

        [DataMember(Name = "x")]
        short X { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class LolMatchHistoryMatchHistoryPosition {\n");
            sb.Append("  Y: ").Append(Y).Append("\n");
            sb.Append("  X: ").Append(X).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}