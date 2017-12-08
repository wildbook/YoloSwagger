#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct GameflowLcdsPlayerCredentialsDto_t {
    std::string encryptionKey;
    uint64_t gameId;
    std::string observerServerIp;
    uint16_t serverPort;
    std::string serverIp;
    std::string observerEncryptionKey;
    uint16_t observerServerPort;
    uint64_t summonerId;
    bool observer;
  };

  inline void to_json(nlohmann::json& j, const GameflowLcdsPlayerCredentialsDto_t& v) {
    j["encryptionKey"] = v.encryptionKey;
    j["gameId"] = v.gameId;
    j["observerServerIp"] = v.observerServerIp;
    j["serverPort"] = v.serverPort;
    j["serverIp"] = v.serverIp;
    j["observerEncryptionKey"] = v.observerEncryptionKey;
    j["observerServerPort"] = v.observerServerPort;
    j["summonerId"] = v.summonerId;
    j["observer"] = v.observer;
  }

  inline void from_json(const nlohmann::json& j, GameflowLcdsPlayerCredentialsDto_t& v) {
    v.encryptionKey = j.at("encryptionKey").get<std::string>();
    v.gameId = j.at("gameId").get<uint64_t>();
    v.observerServerIp = j.at("observerServerIp").get<std::string>();
    v.serverPort = j.at("serverPort").get<uint16_t>();
    v.serverIp = j.at("serverIp").get<std::string>();
    v.observerEncryptionKey = j.at("observerEncryptionKey").get<std::string>();
    v.observerServerPort = j.at("observerServerPort").get<uint16_t>();
    v.summonerId = j.at("summonerId").get<uint64_t>();
    v.observer = j.at("observer").get<bool>();
  }
  inline std::string to_string(const GameflowLcdsPlayerCredentialsDto_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
