using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace LeagueClientApi.Definitions
{
    [DataContract]
    public struct EndOfGameLcdsPointsPenalty
    {
        [DataMember(Name = "penalty")]
        public double Penalty { get; set; }

        [DataMember(Name = "type")]
        public string Type { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class EndOfGameLcdsPointsPenalty {\n");
            sb.Append("  Penalty: ").Append(Penalty).Append("\n");
            sb.Append("  Type: ").Append(Type).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}