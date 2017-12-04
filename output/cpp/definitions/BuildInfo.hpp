#ifndef SWAGGER_TYPES_BuildInfo_HPP
#define SWAGGER_TYPES_BuildInfo_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  struct BuildInfo {
    // 
    int32_t codeBuildId;
    // 
    std::string gameBranch;
    // 
    std::string version;
    // 
    int32_t gameDataBuildId;
    // 
    std::string patchlineVisibleName;
    // 
    int32_t contentBuildId;
    // 
    std::string patchline;
    // 
    std::string branch;
    // 
    std::string branchFull;
    // 
    std::string gameBranchFull;
  };

  inline void to_json(nlohmann::json& j, const BuildInfo& v) {
    j["codeBuildId"] = v.codeBuildId;
    j["gameBranch"] = v.gameBranch;
    j["version"] = v.version;
    j["gameDataBuildId"] = v.gameDataBuildId;
    j["patchlineVisibleName"] = v.patchlineVisibleName;
    j["contentBuildId"] = v.contentBuildId;
    j["patchline"] = v.patchline;
    j["branch"] = v.branch;
    j["branchFull"] = v.branchFull;
    j["gameBranchFull"] = v.gameBranchFull;
  }

  inline void from_json(const nlohmann::json& j, BuildInfo& v) {
    v.codeBuildId = j.at("codeBuildId").get<int32_t>;
    v.gameBranch = j.at("gameBranch").get<std::string>;
    v.version = j.at("version").get<std::string>;
    v.gameDataBuildId = j.at("gameDataBuildId").get<int32_t>;
    v.patchlineVisibleName = j.at("patchlineVisibleName").get<std::string>;
    v.contentBuildId = j.at("contentBuildId").get<int32_t>;
    v.patchline = j.at("patchline").get<std::string>;
    v.branch = j.at("branch").get<std::string>;
    v.branchFull = j.at("branchFull").get<std::string>;
    v.gameBranchFull = j.at("gameBranchFull").get<std::string>;
  }

}
#endif // SWAGGER_TYPES_BuildInfo_HPP
