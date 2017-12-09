#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct BuildInfo_t {
    std::string branch;
    int32_t codeBuildId;
    std::string version;
    std::string gameBranchFull;
    std::string patchlineVisibleName;
    int32_t gameDataBuildId;
    std::string branchFull;
    std::string gameBranch;
    std::string patchline;
    int32_t contentBuildId;
  };

  inline void to_json(nlohmann::json& j, const BuildInfo_t& v) {
    j["branch"] = v.branch;
    j["codeBuildId"] = v.codeBuildId;
    j["version"] = v.version;
    j["gameBranchFull"] = v.gameBranchFull;
    j["patchlineVisibleName"] = v.patchlineVisibleName;
    j["gameDataBuildId"] = v.gameDataBuildId;
    j["branchFull"] = v.branchFull;
    j["gameBranch"] = v.gameBranch;
    j["patchline"] = v.patchline;
    j["contentBuildId"] = v.contentBuildId;
  }

  inline void from_json(const nlohmann::json& j, BuildInfo_t& v) {
    v.branch = j.at("branch").get<std::string>();
    v.codeBuildId = j.at("codeBuildId").get<int32_t>();
    v.version = j.at("version").get<std::string>();
    v.gameBranchFull = j.at("gameBranchFull").get<std::string>();
    v.patchlineVisibleName = j.at("patchlineVisibleName").get<std::string>();
    v.gameDataBuildId = j.at("gameDataBuildId").get<int32_t>();
    v.branchFull = j.at("branchFull").get<std::string>();
    v.gameBranch = j.at("gameBranch").get<std::string>();
    v.patchline = j.at("patchline").get<std::string>();
    v.contentBuildId = j.at("contentBuildId").get<int32_t>();
  }
  inline std::string to_string(const BuildInfo_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
