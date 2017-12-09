#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct BuildInfo_t {
    std::string gameBranchFull;
    std::string branchFull;
    int32_t contentBuildId;
    int32_t gameDataBuildId;
    std::string version;
    int32_t codeBuildId;
    std::string patchlineVisibleName;
    std::string branch;
    std::string gameBranch;
    std::string patchline;
  };

  inline void to_json(nlohmann::json& j, const BuildInfo_t& v) {
    j["gameBranchFull"] = v.gameBranchFull;
    j["branchFull"] = v.branchFull;
    j["contentBuildId"] = v.contentBuildId;
    j["gameDataBuildId"] = v.gameDataBuildId;
    j["version"] = v.version;
    j["codeBuildId"] = v.codeBuildId;
    j["patchlineVisibleName"] = v.patchlineVisibleName;
    j["branch"] = v.branch;
    j["gameBranch"] = v.gameBranch;
    j["patchline"] = v.patchline;
  }

  inline void from_json(const nlohmann::json& j, BuildInfo_t& v) {
    v.gameBranchFull = j.at("gameBranchFull").get<std::string>();
    v.branchFull = j.at("branchFull").get<std::string>();
    v.contentBuildId = j.at("contentBuildId").get<int32_t>();
    v.gameDataBuildId = j.at("gameDataBuildId").get<int32_t>();
    v.version = j.at("version").get<std::string>();
    v.codeBuildId = j.at("codeBuildId").get<int32_t>();
    v.patchlineVisibleName = j.at("patchlineVisibleName").get<std::string>();
    v.branch = j.at("branch").get<std::string>();
    v.gameBranch = j.at("gameBranch").get<std::string>();
    v.patchline = j.at("patchline").get<std::string>();
  }
  inline std::string to_string(const BuildInfo_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
