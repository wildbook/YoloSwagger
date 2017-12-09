using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace LeagueClientApi.Definitions
{
    [DataContract]
    public struct BuildInfo
    {
        [DataMember(Name = "branch")]
        public string Branch { get; set; }

        [DataMember(Name = "branchFull")]
        public string BranchFull { get; set; }

        [DataMember(Name = "codeBuildId")]
        public int CodeBuildId { get; set; }

        [DataMember(Name = "contentBuildId")]
        public int ContentBuildId { get; set; }

        [DataMember(Name = "gameBranch")]
        public string GameBranch { get; set; }

        [DataMember(Name = "gameBranchFull")]
        public string GameBranchFull { get; set; }

        [DataMember(Name = "gameDataBuildId")]
        public int GameDataBuildId { get; set; }

        [DataMember(Name = "patchline")]
        public string Patchline { get; set; }

        [DataMember(Name = "patchlineVisibleName")]
        public string PatchlineVisibleName { get; set; }

        [DataMember(Name = "version")]
        public string Version { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class BuildInfo {\n");
            sb.Append("  Branch: ").Append(Branch).Append("\n");
            sb.Append("  BranchFull: ").Append(BranchFull).Append("\n");
            sb.Append("  CodeBuildId: ").Append(CodeBuildId).Append("\n");
            sb.Append("  ContentBuildId: ").Append(ContentBuildId).Append("\n");
            sb.Append("  GameBranch: ").Append(GameBranch).Append("\n");
            sb.Append("  GameBranchFull: ").Append(GameBranchFull).Append("\n");
            sb.Append("  GameDataBuildId: ").Append(GameDataBuildId).Append("\n");
            sb.Append("  Patchline: ").Append(Patchline).Append("\n");
            sb.Append("  PatchlineVisibleName: ").Append(PatchlineVisibleName).Append("\n");
            sb.Append("  Version: ").Append(Version).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}