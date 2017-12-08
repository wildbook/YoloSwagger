#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct PersonalizedOffersLcdsChampionDTO_t {
    int32_t_t championId;
    bool_t owned;
  };

  inline void to_json(nlohmann::json& j, const PersonalizedOffersLcdsChampionDTO_t& v) {
    j["championId"] = v.championId;
    j["owned"] = v.owned;
  }

  inline void from_json(const nlohmann::json& j, PersonalizedOffersLcdsChampionDTO_t& v) {
    v.championId = j.at("championId").get<int32_t_t>();
    v.owned = j.at("owned").get<bool_t>();
  }
  inline std::string to_string(const PersonalizedOffersLcdsChampionDTO_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
