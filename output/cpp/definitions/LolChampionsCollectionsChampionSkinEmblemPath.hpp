#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolChampionsCollectionsChampionSkinEmblemPath_t {
    std::string_t large;
    std::string_t small;
  };

  inline void to_json(nlohmann::json& j, const LolChampionsCollectionsChampionSkinEmblemPath_t& v) {
    j["large"] = v.large;
    j["small"] = v.small;
  }

  inline void from_json(const nlohmann::json& j, LolChampionsCollectionsChampionSkinEmblemPath_t& v) {
    v.large = j.at("large").get<std::string_t>();
    v.small = j.at("small").get<std::string_t>();
  }
  inline std::string to_string(const LolChampionsCollectionsChampionSkinEmblemPath_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
