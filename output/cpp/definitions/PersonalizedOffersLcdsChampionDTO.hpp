#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct PersonalizedOffersLcdsChampionDTO_t {
    bool owned;
    int32_t championId;
  };

  inline void to_json(nlohmann::json& j, const PersonalizedOffersLcdsChampionDTO_t& v) {
    j["owned"] = v.owned;
    j["championId"] = v.championId;
  }

  inline void from_json(const nlohmann::json& j, PersonalizedOffersLcdsChampionDTO_t& v) {
    v.owned = j.at("owned").get<bool>();
    v.championId = j.at("championId").get<int32_t>();
  }
  inline std::string to_string(const PersonalizedOffersLcdsChampionDTO_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
