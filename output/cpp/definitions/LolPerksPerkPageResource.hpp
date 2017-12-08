#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolPerksPerkPageResource_t {
    std::vector<int32_t> selectedPerkIds;
    bool isActive;
    int32_t id;
    bool isValid;
    bool isDeletable;
    int32_t order;
    int32_t subStyleId;
    int32_t primaryStyleId;
    bool isEditable;
    int32_t formatVersion;
    std::string name;
  };

  inline void to_json(nlohmann::json& j, const LolPerksPerkPageResource_t& v) {
    j["selectedPerkIds"] = v.selectedPerkIds;
    j["isActive"] = v.isActive;
    j["id"] = v.id;
    j["isValid"] = v.isValid;
    j["isDeletable"] = v.isDeletable;
    j["order"] = v.order;
    j["subStyleId"] = v.subStyleId;
    j["primaryStyleId"] = v.primaryStyleId;
    j["isEditable"] = v.isEditable;
    j["formatVersion"] = v.formatVersion;
    j["name"] = v.name;
  }

  inline void from_json(const nlohmann::json& j, LolPerksPerkPageResource_t& v) {
    v.selectedPerkIds = j.at("selectedPerkIds").get<std::vector<int32_t>>();
    v.isActive = j.at("isActive").get<bool>();
    v.id = j.at("id").get<int32_t>();
    v.isValid = j.at("isValid").get<bool>();
    v.isDeletable = j.at("isDeletable").get<bool>();
    v.order = j.at("order").get<int32_t>();
    v.subStyleId = j.at("subStyleId").get<int32_t>();
    v.primaryStyleId = j.at("primaryStyleId").get<int32_t>();
    v.isEditable = j.at("isEditable").get<bool>();
    v.formatVersion = j.at("formatVersion").get<int32_t>();
    v.name = j.at("name").get<std::string>();
  }
  inline std::string to_string(const LolPerksPerkPageResource_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
