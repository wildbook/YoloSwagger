using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace LeagueClientApi.Definitions
{
    [DataContract]
    public struct LolEsportStreamNotificationsESportStreamNotificationsConfig
    {
        [DataMember(Name = "beappFailureLongPollMinutes")]
        public long BeappFailureLongPollMinutes { get; set; }

        [DataMember(Name = "notificationsAssetMagickURL")]
        public string NotificationsAssetMagickURL { get; set; }

        [DataMember(Name = "notificationsEnabled")]
        public bool NotificationsEnabled { get; set; }

        [DataMember(Name = "notificationsLongPollMinutes")]
        public long NotificationsLongPollMinutes { get; set; }

        [DataMember(Name = "notificationsServiceEndpoint")]
        public string NotificationsServiceEndpoint { get; set; }

        [DataMember(Name = "notificationsServiceEndpointV2")]
        public string NotificationsServiceEndpointV2 { get; set; }

        [DataMember(Name = "notificationsShortPollMinutes")]
        public long NotificationsShortPollMinutes { get; set; }

        [DataMember(Name = "notificationsStreamGroupSlug")]
        public string NotificationsStreamGroupSlug { get; set; }

        [DataMember(Name = "notificationsStreamURL")]
        public string NotificationsStreamURL { get; set; }

        [DataMember(Name = "useServiceEndpointV2")]
        public bool UseServiceEndpointV2 { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class LolEsportStreamNotificationsESportStreamNotificationsConfig {\n");
            sb.Append("  BeappFailureLongPollMinutes: ").Append(BeappFailureLongPollMinutes).Append("\n");
            sb.Append("  NotificationsAssetMagickURL: ").Append(NotificationsAssetMagickURL).Append("\n");
            sb.Append("  NotificationsEnabled: ").Append(NotificationsEnabled).Append("\n");
            sb.Append("  NotificationsLongPollMinutes: ").Append(NotificationsLongPollMinutes).Append("\n");
            sb.Append("  NotificationsServiceEndpoint: ").Append(NotificationsServiceEndpoint).Append("\n");
            sb.Append("  NotificationsServiceEndpointV2: ").Append(NotificationsServiceEndpointV2).Append("\n");
            sb.Append("  NotificationsShortPollMinutes: ").Append(NotificationsShortPollMinutes).Append("\n");
            sb.Append("  NotificationsStreamGroupSlug: ").Append(NotificationsStreamGroupSlug).Append("\n");
            sb.Append("  NotificationsStreamURL: ").Append(NotificationsStreamURL).Append("\n");
            sb.Append("  UseServiceEndpointV2: ").Append(UseServiceEndpointV2).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}