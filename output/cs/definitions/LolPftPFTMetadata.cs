using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi
{
    [DataContract]
    struct LolPftPFTMetadata
    {
        [DataMember(Name = "stats")]
        LolPftPFTEndOfGameStats Stats { get; set; }

        [DataMember(Name = "appName")]
        string AppName { get; set; }

        [DataMember(Name = "locale")]
        string Locale { get; set; }

        [DataMember(Name = "appVersion")]
        string AppVersion { get; set; }

        [DataMember(Name = "systemOs")]
        string SystemOs { get; set; }

        [DataMember(Name = "env")]
        string Env { get; set; }

        [DataMember(Name = "webRegion")]
        string WebRegion { get; set; }

        [DataMember(Name = "accountId")]
        ulong AccountId { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class LolPftPFTMetadata {\n");
            sb.Append("  Stats: ").Append(Stats).Append("\n");
            sb.Append("  AppName: ").Append(AppName).Append("\n");
            sb.Append("  Locale: ").Append(Locale).Append("\n");
            sb.Append("  AppVersion: ").Append(AppVersion).Append("\n");
            sb.Append("  SystemOs: ").Append(SystemOs).Append("\n");
            sb.Append("  Env: ").Append(Env).Append("\n");
            sb.Append("  WebRegion: ").Append(WebRegion).Append("\n");
            sb.Append("  AccountId: ").Append(AccountId).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}