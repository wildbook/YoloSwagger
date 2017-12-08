#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct BuildInfo_t {
    int32_t_t codeBuildId;
    std::string_t gameBranch;
    std::string_t version;
    int32_t_t gameDataBuildId;
    std::string_t patchlineVisibleName;
    int32_t_t contentBuildId;
    std::string_t patchline;
    std::string_t branch;
    std::string_t branchFull;
    std::string_t gameBranchFull;
  };

  inline void to_json(nlohmann::json& j, const BuildInfo_t& v) {
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

  inline void from_json(const nlohmann::json& j, BuildInfo_t& v) {
    v.codeBuildId = j.at("codeBuildId").get<int32_t_t>();
    v.gameBranch = j.at("gameBranch").get<std::string_t>();
    v.version = j.at("version").get<std::string_t>();
    v.gameDataBuildId = j.at("gameDataBuildId").get<int32_t_t>();
    v.patchlineVisibleName = j.at("patchlineVisibleName").get<std::string_t>();
    v.contentBuildId = j.at("contentBuildId").get<int32_t_t>();
    v.patchline = j.at("patchline").get<std::string_t>();
    v.branch = j.at("branch").get<std::string_t>();
    v.branchFull = j.at("branchFull").get<std::string_t>();
    v.gameBranchFull = j.at("gameBranchFull").get<std::string_t>();
  }
  inline std::string to_string(const BuildInfo_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
