#pragma once
#include <json.hpp>
#include <optional>
#include "RecofrienderFriendState.hpp"
namespace leagueapi {
  struct RecofrienderContactResource_t {
    uint64_t accountId;
    std::string displayState;
    std::string action;
    std::string source;
    std::string imageUrl;
    uint64_t summonerId;
    int64_t recommendScore;
    std::string name;
    RecofrienderFriendState_t friendState;
  };

  inline void to_json(nlohmann::json& j, const RecofrienderContactResource_t& v) {
    j["accountId"] = v.accountId;
    j["displayState"] = v.displayState;
    j["action"] = v.action;
    j["source"] = v.source;
    j["imageUrl"] = v.imageUrl;
    j["summonerId"] = v.summonerId;
    j["recommendScore"] = v.recommendScore;
    j["name"] = v.name;
    j["friendState"] = v.friendState;
  }

  inline void from_json(const nlohmann::json& j, RecofrienderContactResource_t& v) {
    v.accountId = j.at("accountId").get<uint64_t>();
    v.displayState = j.at("displayState").get<std::string>();
    v.action = j.at("action").get<std::string>();
    v.source = j.at("source").get<std::string>();
    v.imageUrl = j.at("imageUrl").get<std::string>();
    v.summonerId = j.at("summonerId").get<uint64_t>();
    v.recommendScore = j.at("recommendScore").get<int64_t>();
    v.name = j.at("name").get<std::string>();
    v.friendState = j.at("friendState").get<RecofrienderFriendState_t>();
  }
  inline std::string to_string(const RecofrienderContactResource_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
