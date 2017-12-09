#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct BuildInfo_t {
    std::string patchlineVisibleName;
    int32_t contentBuildId;
    int32_t codeBuildId;
    std::string branch;
    int32_t gameDataBuildId;
    std::string gameBranchFull;
    std::string branchFull;
    std::string version;
    std::string patchline;
    std::string gameBranch;
  };

  inline void to_json(nlohmann::json& j, const BuildInfo_t& v) {
    j["patchlineVisibleName"] = v.patchlineVisibleName;
    j["contentBuildId"] = v.contentBuildId;
    j["codeBuildId"] = v.codeBuildId;
    j["branch"] = v.branch;
    j["gameDataBuildId"] = v.gameDataBuildId;
    j["gameBranchFull"] = v.gameBranchFull;
    j["branchFull"] = v.branchFull;
    j["version"] = v.version;
    j["patchline"] = v.patchline;
    j["gameBranch"] = v.gameBranch;
  }

  inline void from_json(const nlohmann::json& j, BuildInfo_t& v) {
    v.patchlineVisibleName = j.at("patchlineVisibleName").get<std::string>();
    v.contentBuildId = j.at("contentBuildId").get<int32_t>();
    v.codeBuildId = j.at("codeBuildId").get<int32_t>();
    v.branch = j.at("branch").get<std::string>();
    v.gameDataBuildId = j.at("gameDataBuildId").get<int32_t>();
    v.gameBranchFull = j.at("gameBranchFull").get<std::string>();
    v.branchFull = j.at("branchFull").get<std::string>();
    v.version = j.at("version").get<std::string>();
    v.patchline = j.at("patchline").get<std::string>();
    v.gameBranch = j.at("gameBranch").get<std::string>();
  }
  inline std::string to_string(const BuildInfo_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
