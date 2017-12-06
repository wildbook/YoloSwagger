using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi
{
    [DataContract]
    struct LolCollectionsPlayerNotification
    {
        [DataMember(Name = "backgroundUrl")]
        string BackgroundUrl { get; set; }

        [DataMember(Name = "critical")]
        bool Critical { get; set; }

        [DataMember(Name = "data")]
        Dictionary<string, string> Data { get; set; }

        [DataMember(Name = "detailKey")]
        string DetailKey { get; set; }

        [DataMember(Name = "iconUrl")]
        string IconUrl { get; set; }

        [DataMember(Name = "id")]
        ulong Id { get; set; }

        [DataMember(Name = "source")]
        string Source { get; set; }

        [DataMember(Name = "state")]
        string State { get; set; }

        [DataMember(Name = "titleKey")]
        string TitleKey { get; set; }

        [DataMember(Name = "type")]
        string Type { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class LolCollectionsPlayerNotification {\n");
            sb.Append("  BackgroundUrl: ").Append(BackgroundUrl).Append("\n");
            sb.Append("  Critical: ").Append(Critical).Append("\n");
            sb.Append("  Data: ").Append(Data).Append("\n");
            sb.Append("  DetailKey: ").Append(DetailKey).Append("\n");
            sb.Append("  IconUrl: ").Append(IconUrl).Append("\n");
            sb.Append("  Id: ").Append(Id).Append("\n");
            sb.Append("  Source: ").Append(Source).Append("\n");
            sb.Append("  State: ").Append(State).Append("\n");
            sb.Append("  TitleKey: ").Append(TitleKey).Append("\n");
            sb.Append("  Type: ").Append(Type).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}