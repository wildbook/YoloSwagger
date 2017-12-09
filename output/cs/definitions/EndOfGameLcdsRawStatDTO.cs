using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace LeagueClientApi.Definitions
{
    [DataContract]
    public struct EndOfGameLcdsRawStatDTO
    {
        [DataMember(Name = "statTypeName")]
        public string StatTypeName { get; set; }

        [DataMember(Name = "value")]
        public long Value { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class EndOfGameLcdsRawStatDTO {\n");
            sb.Append("  StatTypeName: ").Append(StatTypeName).Append("\n");
            sb.Append("  Value: ").Append(Value).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}