using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace LeagueClientApi.Definitions
{
    [DataContract]
    public struct LolPftPFTMetadata
    {
        [DataMember(Name = "accountId")]
        public ulong AccountId { get; set; }

        [DataMember(Name = "appName")]
        public string AppName { get; set; }

        [DataMember(Name = "appVersion")]
        public string AppVersion { get; set; }

        [DataMember(Name = "env")]
        public string Env { get; set; }

        [DataMember(Name = "locale")]
        public string Locale { get; set; }

        [DataMember(Name = "stats")]
        public LolPftPFTEndOfGameStats Stats { get; set; }

        [DataMember(Name = "systemOs")]
        public string SystemOs { get; set; }

        [DataMember(Name = "webRegion")]
        public string WebRegion { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class LolPftPFTMetadata {\n");
            sb.Append("  AccountId: ").Append(AccountId).Append("\n");
            sb.Append("  AppName: ").Append(AppName).Append("\n");
            sb.Append("  AppVersion: ").Append(AppVersion).Append("\n");
            sb.Append("  Env: ").Append(Env).Append("\n");
            sb.Append("  Locale: ").Append(Locale).Append("\n");
            sb.Append("  Stats: ").Append(Stats).Append("\n");
            sb.Append("  SystemOs: ").Append(SystemOs).Append("\n");
            sb.Append("  WebRegion: ").Append(WebRegion).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}