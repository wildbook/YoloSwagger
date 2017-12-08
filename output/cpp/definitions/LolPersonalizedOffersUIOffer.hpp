#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolPersonalizedOffersUIOffer_t {
    int64_t_t discountPrice;
    int32_t_t championId;
    std::string_t type;
    bool_t owned;
    int32_t_t skinId;
    int64_t_t originalPrice;
    std::string_t skinName;
    bool_t revealed;
    std::string_t id;
    std::string_t expirationDate;
  };

  inline void to_json(nlohmann::json& j, const LolPersonalizedOffersUIOffer_t& v) {
    j["discountPrice"] = v.discountPrice;
    j["championId"] = v.championId;
    j["type"] = v.type;
    j["owned"] = v.owned;
    j["skinId"] = v.skinId;
    j["originalPrice"] = v.originalPrice;
    j["skinName"] = v.skinName;
    j["revealed"] = v.revealed;
    j["id"] = v.id;
    j["expirationDate"] = v.expirationDate;
  }

  inline void from_json(const nlohmann::json& j, LolPersonalizedOffersUIOffer_t& v) {
    v.discountPrice = j.at("discountPrice").get<int64_t_t>();
    v.championId = j.at("championId").get<int32_t_t>();
    v.type = j.at("type").get<std::string_t>();
    v.owned = j.at("owned").get<bool_t>();
    v.skinId = j.at("skinId").get<int32_t_t>();
    v.originalPrice = j.at("originalPrice").get<int64_t_t>();
    v.skinName = j.at("skinName").get<std::string_t>();
    v.revealed = j.at("revealed").get<bool_t>();
    v.id = j.at("id").get<std::string_t>();
    v.expirationDate = j.at("expirationDate").get<std::string_t>();
  }
  inline std::string to_string(const LolPersonalizedOffersUIOffer_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
