using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace LeagueClientApi.Definitions
{
    [DataContract]
    public struct Cookie
    {
        [DataMember(Name = "domain")]
        public string Domain { get; set; }

        [DataMember(Name = "expires")]
        public long? Expires { get; set; }

        [DataMember(Name = "httponly")]
        public bool Httponly { get; set; }

        [DataMember(Name = "name")]
        public string Name { get; set; }

        [DataMember(Name = "path")]
        public string Path { get; set; }

        [DataMember(Name = "secure")]
        public bool Secure { get; set; }

        [DataMember(Name = "url")]
        public string Url { get; set; }

        [DataMember(Name = "value")]
        public string Value { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class Cookie {\n");
            sb.Append("  Domain: ").Append(Domain).Append("\n");
            sb.Append("  Expires: ").Append(Expires).Append("\n");
            sb.Append("  Httponly: ").Append(Httponly).Append("\n");
            sb.Append("  Name: ").Append(Name).Append("\n");
            sb.Append("  Path: ").Append(Path).Append("\n");
            sb.Append("  Secure: ").Append(Secure).Append("\n");
            sb.Append("  Url: ").Append(Url).Append("\n");
            sb.Append("  Value: ").Append(Value).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}