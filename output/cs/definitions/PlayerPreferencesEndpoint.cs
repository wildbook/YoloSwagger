using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi
{
    [DataContract]
    struct PlayerPreferencesEndpoint
    {
        [DataMember(Name = "EnforceHttps")]
        bool EnforceHttps { get; set; }

        [DataMember(Name = "Version")]
        string Version { get; set; }

        [DataMember(Name = "Enabled")]
        bool Enabled { get; set; }

        [DataMember(Name = "ServiceEndpoint")]
        string ServiceEndpoint { get; set; }

        [DataMember(Name = "Retries")]
        long Retries { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class PlayerPreferencesEndpoint {\n");
            sb.Append("  EnforceHttps: ").Append(EnforceHttps).Append("\n");
            sb.Append("  Version: ").Append(Version).Append("\n");
            sb.Append("  Enabled: ").Append(Enabled).Append("\n");
            sb.Append("  ServiceEndpoint: ").Append(ServiceEndpoint).Append("\n");
            sb.Append("  Retries: ").Append(Retries).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}