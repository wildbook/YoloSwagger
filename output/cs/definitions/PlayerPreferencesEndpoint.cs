using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace LeagueClientApi.Definitions
{
    [DataContract]
    public struct PlayerPreferencesEndpoint
    {
        [DataMember(Name = "Enabled")]
        public bool Enabled { get; set; }

        [DataMember(Name = "EnforceHttps")]
        public bool EnforceHttps { get; set; }

        [DataMember(Name = "Retries")]
        public long Retries { get; set; }

        [DataMember(Name = "ServiceEndpoint")]
        public string ServiceEndpoint { get; set; }

        [DataMember(Name = "Version")]
        public string Version { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class PlayerPreferencesEndpoint {\n");
            sb.Append("  Enabled: ").Append(Enabled).Append("\n");
            sb.Append("  EnforceHttps: ").Append(EnforceHttps).Append("\n");
            sb.Append("  Retries: ").Append(Retries).Append("\n");
            sb.Append("  ServiceEndpoint: ").Append(ServiceEndpoint).Append("\n");
            sb.Append("  Version: ").Append(Version).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}