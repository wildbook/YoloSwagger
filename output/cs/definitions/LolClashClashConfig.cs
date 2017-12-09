using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace LeagueClientApi.Definitions
{
    [DataContract]
    public struct LolClashClashConfig
    {
        [DataMember(Name = "DarkModeEntitlement")]
        public string DarkModeEntitlement { get; set; }

        [DataMember(Name = "EnabledState")]
        public LolClashClashState EnabledState { get; set; }

        [DataMember(Name = "IconConfig")]
        public string IconConfig { get; set; }

        [DataMember(Name = "IsPlaymodeRestrictionEnabled")]
        public bool IsPlaymodeRestrictionEnabled { get; set; }

        [DataMember(Name = "UseIndividualEntitlement")]
        public bool UseIndividualEntitlement { get; set; }

        [DataMember(Name = "Visibility")]
        public LolClashClashVisibility Visibility { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class LolClashClashConfig {\n");
            sb.Append("  DarkModeEntitlement: ").Append(DarkModeEntitlement).Append("\n");
            sb.Append("  EnabledState: ").Append(EnabledState).Append("\n");
            sb.Append("  IconConfig: ").Append(IconConfig).Append("\n");
            sb.Append("  IsPlaymodeRestrictionEnabled: ").Append(IsPlaymodeRestrictionEnabled).Append("\n");
            sb.Append("  UseIndividualEntitlement: ").Append(UseIndividualEntitlement).Append("\n");
            sb.Append("  Visibility: ").Append(Visibility).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}