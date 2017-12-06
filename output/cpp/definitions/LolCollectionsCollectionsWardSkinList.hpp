#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolCollectionsCollectionsWardSkinList_t {
    std::vector<int64_t> wardSkinList;
  };

  inline void to_json(nlohmann::json& j, const LolCollectionsCollectionsWardSkinList_t& v) {
    j["wardSkinList"] = v.wardSkinList;
  }

  inline void from_json(const nlohmann::json& j, LolCollectionsCollectionsWardSkinList_t& v) {
    v.wardSkinList = j.at("wardSkinList").get<std::vector<int64_t>>();
  }
}
