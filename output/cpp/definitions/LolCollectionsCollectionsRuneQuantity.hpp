#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolCollectionsCollectionsRuneQuantity_t {
    uint32_t_t runeId;
    int32_t_t quantity;
  };

  inline void to_json(nlohmann::json& j, const LolCollectionsCollectionsRuneQuantity_t& v) {
    j["runeId"] = v.runeId;
    j["quantity"] = v.quantity;
  }

  inline void from_json(const nlohmann::json& j, LolCollectionsCollectionsRuneQuantity_t& v) {
    v.runeId = j.at("runeId").get<uint32_t_t>();
    v.quantity = j.at("quantity").get<int32_t_t>();
  }
  inline std::string to_string(const LolCollectionsCollectionsRuneQuantity_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
