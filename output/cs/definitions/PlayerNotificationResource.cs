using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace LeagueClientApi.Definitions
{
    [DataContract]
    public struct PlayerNotificationResource
    {
        [DataMember(Name = "backgroundUrl")]
        public string BackgroundUrl { get; set; }

        [DataMember(Name = "created")]
        public string Created { get; set; }

        [DataMember(Name = "critical")]
        public bool Critical { get; set; }

        [DataMember(Name = "data")]
        public Dictionary<string, string> Data { get; set; }

        [DataMember(Name = "detailKey")]
        public string DetailKey { get; set; }

        [DataMember(Name = "dismissible")]
        public bool Dismissible { get; set; }

        [DataMember(Name = "expires")]
        public string Expires { get; set; }

        [DataMember(Name = "iconUrl")]
        public string IconUrl { get; set; }

        [DataMember(Name = "id")]
        public ulong Id { get; set; }

        [DataMember(Name = "source")]
        public string Source { get; set; }

        [DataMember(Name = "state")]
        public string State { get; set; }

        [DataMember(Name = "titleKey")]
        public string TitleKey { get; set; }

        [DataMember(Name = "type")]
        public string Type { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class PlayerNotificationResource {\n");
            sb.Append("  BackgroundUrl: ").Append(BackgroundUrl).Append("\n");
            sb.Append("  Created: ").Append(Created).Append("\n");
            sb.Append("  Critical: ").Append(Critical).Append("\n");
            sb.Append("  Data: ").Append(Data).Append("\n");
            sb.Append("  DetailKey: ").Append(DetailKey).Append("\n");
            sb.Append("  Dismissible: ").Append(Dismissible).Append("\n");
            sb.Append("  Expires: ").Append(Expires).Append("\n");
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