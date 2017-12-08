#pragma once
#include <json.hpp>
#include <optional>
#include "RecofrienderActionResource.hpp"
namespace leagueapi {
  struct RecofrienderAccountResource_t {
    std::string platformId;
    std::vector<RecofrienderActionResource_t> contacts;
    uint64_t accountId;
  };

  inline void to_json(nlohmann::json& j, const RecofrienderAccountResource_t& v) {
    j["platformId"] = v.platformId;
    j["contacts"] = v.contacts;
    j["accountId"] = v.accountId;
  }

  inline void from_json(const nlohmann::json& j, RecofrienderAccountResource_t& v) {
    v.platformId = j.at("platformId").get<std::string>();
    v.contacts = j.at("contacts").get<std::vector<RecofrienderActionResource_t>>();
    v.accountId = j.at("accountId").get<uint64_t>();
  }
  inline std::string to_string(const RecofrienderAccountResource_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
