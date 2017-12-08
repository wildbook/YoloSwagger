using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi
{
    [DataContract]
    struct LcdsPayloadDto
    {
        [DataMember(Name = "body")]
        string Body { get; set; }

        [DataMember(Name = "headers")]
        Dictionary<string, string> Headers { get; set; }

        [DataMember(Name = "method")]
        string Method { get; set; }

        [DataMember(Name = "path")]
        string Path { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class LcdsPayloadDto {\n");
            sb.Append("  Body: ").Append(Body).Append("\n");
            sb.Append("  Headers: ").Append(Headers).Append("\n");
            sb.Append("  Method: ").Append(Method).Append("\n");
            sb.Append("  Path: ").Append(Path).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}