#ifndef SWAGGER_TYPES_BuildInfo_HPP
#define SWAGGER_TYPES_BuildInfo_HPP
#include <json.hpp>
namespace test {
  // 
  struct BuildInfo {
'    // 
    std::string branch;
    // 
    std::string branchFull;
    // 
    int32_t codeBuildId;
    // 
    int32_t contentBuildId;
    // 
    std::string gameBranch;
    // 
    std::string gameBranchFull;
    // 
    int32_t gameDataBuildId;
    // 
    std::string patchline;
    // 
    std::string patchlineVisibleName;
    // 
    std::string version;
  };

  void to_json(nlohmann::json& j, const BuildInfo& v) {
    j["branch"] = v.branch;
    j["branchFull"] = v.branchFull;
    j["codeBuildId"] = v.codeBuildId;
    j["contentBuildId"] = v.contentBuildId;
    j["gameBranch"] = v.gameBranch;
    j["gameBranchFull"] = v.gameBranchFull;
    j["gameDataBuildId"] = v.gameDataBuildId;
    j["patchline"] = v.patchline;
    j["patchlineVisibleName"] = v.patchlineVisibleName;
    j["version"] = v.version;
  }

  void from_json(const nlohmann::json& j, BuildInfo& v) {
    v.branch = j.at("branch").get<std::string>;
    v.branchFull = j.at("branchFull").get<std::string>;
    v.codeBuildId = j.at("codeBuildId").get<int32_t>;
    v.contentBuildId = j.at("contentBuildId").get<int32_t>;
    v.gameBranch = j.at("gameBranch").get<std::string>;
    v.gameBranchFull = j.at("gameBranchFull").get<std::string>;
    v.gameDataBuildId = j.at("gameDataBuildId").get<int32_t>;
    v.patchline = j.at("patchline").get<std::string>;
    v.patchlineVisibleName = j.at("patchlineVisibleName").get<std::string>;
    v.version = j.at("version").get<std::string>;
  }

}
#endif // SWAGGER_TYPES_BuildInfo_HPP
