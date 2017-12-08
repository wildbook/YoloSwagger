using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi
{
    [DataContract]
    struct PatcherComponentResource
    {
        [DataMember(Name = "install_dir")]
        string Install_dir { get; set; }

        [DataMember(Name = "locale")]
        string Locale { get; set; }

        [DataMember(Name = "region")]
        string Region { get; set; }

        [DataMember(Name = "hostname")]
        string Hostname { get; set; }

        [DataMember(Name = "remote_path")]
        string Remote_path { get; set; }

        [DataMember(Name = "use_tls")]
        bool Use_tls { get; set; }

        [DataMember(Name = "headers")]
        PatcherHeaderEntry[] Headers { get; set; }

        [DataMember(Name = "copy_to_solution")]
        bool Copy_to_solution { get; set; }

        [DataMember(Name = "type")]
        PatcherComponentResourceType Type { get; set; }

        [DataMember(Name = "id")]
        string Id { get; set; }

        [DataMember(Name = "history")]
        PatcherComponentResourceHistory History { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class PatcherComponentResource {\n");
            sb.Append("  Install_dir: ").Append(Install_dir).Append("\n");
            sb.Append("  Locale: ").Append(Locale).Append("\n");
            sb.Append("  Region: ").Append(Region).Append("\n");
            sb.Append("  Hostname: ").Append(Hostname).Append("\n");
            sb.Append("  Remote_path: ").Append(Remote_path).Append("\n");
            sb.Append("  Use_tls: ").Append(Use_tls).Append("\n");
            sb.Append("  Headers: ").Append(Headers).Append("\n");
            sb.Append("  Copy_to_solution: ").Append(Copy_to_solution).Append("\n");
            sb.Append("  Type: ").Append(Type).Append("\n");
            sb.Append("  Id: ").Append(Id).Append("\n");
            sb.Append("  History: ").Append(History).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}